#pragma once

#if IL2CPP_TARGET_POSIX

#include <pthread.h>
#include <time.h>
#include "os/Thread.h"

namespace il2cpp
{
namespace os
{
namespace posix
{

inline timespec MillisecondsToTimespec (uint32_t ms)
{
	timespec result;
    result.tv_sec = ms / 1000;
    result.tv_nsec = (ms % 1000) * 1000000;
    return result;
}

inline Thread::ThreadId PosixThreadIdToThreadId (pthread_t thread)
{
	Thread::ThreadId threadId = 0;
	memcpy (&threadId, &thread, std::min (sizeof (threadId), sizeof (thread)));
	return threadId;
}

struct PosixAutoLock
{
	pthread_mutex_t* mutex;
	PosixAutoLock (pthread_mutex_t* m)
		: mutex (m) { pthread_mutex_lock (mutex); }
	~PosixAutoLock ()
		{ pthread_mutex_unlock (mutex); }
};

}
}
}

#endif // IL2CPP_TARGET_POSIX
