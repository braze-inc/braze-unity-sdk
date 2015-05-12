#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t1482  : public HandshakeMessage_t1445
{
	// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCertSelected
	bool ___clientCertSelected_9;
	// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCert
	X509Certificate_t1460 * ___clientCert_10;
};
