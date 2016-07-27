#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t1681818320;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t999575008;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t832764753;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t2465425429;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t3478737922;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1345038285;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t2259562908;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t396990845;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t899915837  : public Il2CppObject
{
public:

public:
};

struct GameCenterPlatform_t899915837_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_1_t359458046 * ___s_AuthenticateCallback_0;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_FriendsCallback
	Action_1_t359458046 * ___s_FriendsCallback_1;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementDescriptionLoaderCallback
	Action_1_t1681818320 * ___s_AchievementDescriptionLoaderCallback_2;
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AchievementLoaderCallback
	Action_1_t999575008 * ___s_AchievementLoaderCallback_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ProgressCallback
	Action_1_t359458046 * ___s_ProgressCallback_4;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreCallback
	Action_1_t359458046 * ___s_ScoreCallback_5;
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ScoreLoaderCallback
	Action_1_t832764753 * ___s_ScoreLoaderCallback_6;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_LeaderboardCallback
	Action_1_t359458046 * ___s_LeaderboardCallback_7;
	// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_UsersCallback
	Action_1_t2465425429 * ___s_UsersCallback_8;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t3478737922* ___s_adCache_9;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t1345038285* ___s_friends_10;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t1345038285* ___s_users_11;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t359458046 * ___s_ResetAchievements_12;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t2259562908 * ___m_LocalUser_13;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t396990845 * ___m_GcBoards_14;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_1_t359458046 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_1_t359458046 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_1_t359458046 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_AuthenticateCallback_0, value);
	}

	inline static int32_t get_offset_of_s_FriendsCallback_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_FriendsCallback_1)); }
	inline Action_1_t359458046 * get_s_FriendsCallback_1() const { return ___s_FriendsCallback_1; }
	inline Action_1_t359458046 ** get_address_of_s_FriendsCallback_1() { return &___s_FriendsCallback_1; }
	inline void set_s_FriendsCallback_1(Action_1_t359458046 * value)
	{
		___s_FriendsCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_FriendsCallback_1, value);
	}

	inline static int32_t get_offset_of_s_AchievementDescriptionLoaderCallback_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_AchievementDescriptionLoaderCallback_2)); }
	inline Action_1_t1681818320 * get_s_AchievementDescriptionLoaderCallback_2() const { return ___s_AchievementDescriptionLoaderCallback_2; }
	inline Action_1_t1681818320 ** get_address_of_s_AchievementDescriptionLoaderCallback_2() { return &___s_AchievementDescriptionLoaderCallback_2; }
	inline void set_s_AchievementDescriptionLoaderCallback_2(Action_1_t1681818320 * value)
	{
		___s_AchievementDescriptionLoaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_AchievementDescriptionLoaderCallback_2, value);
	}

	inline static int32_t get_offset_of_s_AchievementLoaderCallback_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_AchievementLoaderCallback_3)); }
	inline Action_1_t999575008 * get_s_AchievementLoaderCallback_3() const { return ___s_AchievementLoaderCallback_3; }
	inline Action_1_t999575008 ** get_address_of_s_AchievementLoaderCallback_3() { return &___s_AchievementLoaderCallback_3; }
	inline void set_s_AchievementLoaderCallback_3(Action_1_t999575008 * value)
	{
		___s_AchievementLoaderCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_AchievementLoaderCallback_3, value);
	}

	inline static int32_t get_offset_of_s_ProgressCallback_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_ProgressCallback_4)); }
	inline Action_1_t359458046 * get_s_ProgressCallback_4() const { return ___s_ProgressCallback_4; }
	inline Action_1_t359458046 ** get_address_of_s_ProgressCallback_4() { return &___s_ProgressCallback_4; }
	inline void set_s_ProgressCallback_4(Action_1_t359458046 * value)
	{
		___s_ProgressCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_ProgressCallback_4, value);
	}

	inline static int32_t get_offset_of_s_ScoreCallback_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_ScoreCallback_5)); }
	inline Action_1_t359458046 * get_s_ScoreCallback_5() const { return ___s_ScoreCallback_5; }
	inline Action_1_t359458046 ** get_address_of_s_ScoreCallback_5() { return &___s_ScoreCallback_5; }
	inline void set_s_ScoreCallback_5(Action_1_t359458046 * value)
	{
		___s_ScoreCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_ScoreCallback_5, value);
	}

	inline static int32_t get_offset_of_s_ScoreLoaderCallback_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_ScoreLoaderCallback_6)); }
	inline Action_1_t832764753 * get_s_ScoreLoaderCallback_6() const { return ___s_ScoreLoaderCallback_6; }
	inline Action_1_t832764753 ** get_address_of_s_ScoreLoaderCallback_6() { return &___s_ScoreLoaderCallback_6; }
	inline void set_s_ScoreLoaderCallback_6(Action_1_t832764753 * value)
	{
		___s_ScoreLoaderCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___s_ScoreLoaderCallback_6, value);
	}

	inline static int32_t get_offset_of_s_LeaderboardCallback_7() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_LeaderboardCallback_7)); }
	inline Action_1_t359458046 * get_s_LeaderboardCallback_7() const { return ___s_LeaderboardCallback_7; }
	inline Action_1_t359458046 ** get_address_of_s_LeaderboardCallback_7() { return &___s_LeaderboardCallback_7; }
	inline void set_s_LeaderboardCallback_7(Action_1_t359458046 * value)
	{
		___s_LeaderboardCallback_7 = value;
		Il2CppCodeGenWriteBarrier(&___s_LeaderboardCallback_7, value);
	}

	inline static int32_t get_offset_of_s_UsersCallback_8() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_UsersCallback_8)); }
	inline Action_1_t2465425429 * get_s_UsersCallback_8() const { return ___s_UsersCallback_8; }
	inline Action_1_t2465425429 ** get_address_of_s_UsersCallback_8() { return &___s_UsersCallback_8; }
	inline void set_s_UsersCallback_8(Action_1_t2465425429 * value)
	{
		___s_UsersCallback_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_UsersCallback_8, value);
	}

	inline static int32_t get_offset_of_s_adCache_9() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_adCache_9)); }
	inline AchievementDescriptionU5BU5D_t3478737922* get_s_adCache_9() const { return ___s_adCache_9; }
	inline AchievementDescriptionU5BU5D_t3478737922** get_address_of_s_adCache_9() { return &___s_adCache_9; }
	inline void set_s_adCache_9(AchievementDescriptionU5BU5D_t3478737922* value)
	{
		___s_adCache_9 = value;
		Il2CppCodeGenWriteBarrier(&___s_adCache_9, value);
	}

	inline static int32_t get_offset_of_s_friends_10() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_friends_10)); }
	inline UserProfileU5BU5D_t1345038285* get_s_friends_10() const { return ___s_friends_10; }
	inline UserProfileU5BU5D_t1345038285** get_address_of_s_friends_10() { return &___s_friends_10; }
	inline void set_s_friends_10(UserProfileU5BU5D_t1345038285* value)
	{
		___s_friends_10 = value;
		Il2CppCodeGenWriteBarrier(&___s_friends_10, value);
	}

	inline static int32_t get_offset_of_s_users_11() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_users_11)); }
	inline UserProfileU5BU5D_t1345038285* get_s_users_11() const { return ___s_users_11; }
	inline UserProfileU5BU5D_t1345038285** get_address_of_s_users_11() { return &___s_users_11; }
	inline void set_s_users_11(UserProfileU5BU5D_t1345038285* value)
	{
		___s_users_11 = value;
		Il2CppCodeGenWriteBarrier(&___s_users_11, value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_12() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___s_ResetAchievements_12)); }
	inline Action_1_t359458046 * get_s_ResetAchievements_12() const { return ___s_ResetAchievements_12; }
	inline Action_1_t359458046 ** get_address_of_s_ResetAchievements_12() { return &___s_ResetAchievements_12; }
	inline void set_s_ResetAchievements_12(Action_1_t359458046 * value)
	{
		___s_ResetAchievements_12 = value;
		Il2CppCodeGenWriteBarrier(&___s_ResetAchievements_12, value);
	}

	inline static int32_t get_offset_of_m_LocalUser_13() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___m_LocalUser_13)); }
	inline LocalUser_t2259562908 * get_m_LocalUser_13() const { return ___m_LocalUser_13; }
	inline LocalUser_t2259562908 ** get_address_of_m_LocalUser_13() { return &___m_LocalUser_13; }
	inline void set_m_LocalUser_13(LocalUser_t2259562908 * value)
	{
		___m_LocalUser_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalUser_13, value);
	}

	inline static int32_t get_offset_of_m_GcBoards_14() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t899915837_StaticFields, ___m_GcBoards_14)); }
	inline List_1_t396990845 * get_m_GcBoards_14() const { return ___m_GcBoards_14; }
	inline List_1_t396990845 ** get_address_of_m_GcBoards_14() { return &___m_GcBoards_14; }
	inline void set_m_GcBoards_14(List_1_t396990845 * value)
	{
		___m_GcBoards_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_GcBoards_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
