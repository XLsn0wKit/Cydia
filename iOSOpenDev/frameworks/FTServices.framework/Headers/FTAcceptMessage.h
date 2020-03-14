/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTFaceTimeMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSNumber, NSData, NSString;

@interface FTAcceptMessage : FTFaceTimeMessage <NSCopying> {
	NSData *_selfPushToken;	// 4 = 0x4
	NSNumber *_selfNATType;	// 8 = 0x8
	NSData *_selfBlob;	// 12 = 0xc
	NSData *_selfNATIP;	// 16 = 0x10
	NSString *_peerID;	// 20 = 0x14
	NSData *_peerPushToken;	// 24 = 0x18
	NSNumber *_peerNATType;	// 28 = 0x1c
	NSData *_peerBlob;	// 32 = 0x20
	NSData *_peerNATIP;	// 36 = 0x24
	NSNumber *_relayType;	// 40 = 0x28
	NSData *_relayConnectionId;	// 44 = 0x2c
	NSData *_relayTransactionIdAlloc;	// 48 = 0x30
	NSData *_relayTokenAllocReq;	// 52 = 0x34
	NSData *_selfRelayIP;	// 56 = 0x38
	NSNumber *_selfRelayPort;	// 60 = 0x3c
	NSData *_peerRelayIP;	// 64 = 0x40
	NSNumber *_peerRelayPort;	// 68 = 0x44
}
@property(copy) NSNumber *peerRelayPort;	// G=0x39dd; S=0x39f1; @synthesize=_peerRelayPort
@property(copy) NSData *peerRelayIP;	// G=0x39a5; S=0x39b9; @synthesize=_peerRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x396d; S=0x3981; @synthesize=_selfRelayPort
@property(copy) NSData *selfRelayIP;	// G=0x3935; S=0x3949; @synthesize=_selfRelayIP
@property(copy) NSData *relayTokenAllocReq;	// G=0x38fd; S=0x3911; @synthesize=_relayTokenAllocReq
@property(copy) NSData *relayTransactionIdAlloc;	// G=0x38c5; S=0x38d9; @synthesize=_relayTransactionIdAlloc
@property(copy) NSData *relayConnectionId;	// G=0x388d; S=0x38a1; @synthesize=_relayConnectionId
@property(copy) NSNumber *relayType;	// G=0x3855; S=0x3869; @synthesize=_relayType
@property(copy) NSData *peerNATIP;	// G=0x381d; S=0x3831; @synthesize=_peerNATIP
@property(copy) NSData *peerBlob;	// G=0x37e5; S=0x37f9; @synthesize=_peerBlob
@property(copy) NSNumber *peerNATType;	// G=0x37ad; S=0x37c1; @synthesize=_peerNATType
@property(copy) NSData *peerPushToken;	// G=0x3775; S=0x3789; @synthesize=_peerPushToken
@property(copy) NSString *peerID;	// G=0x373d; S=0x3751; @synthesize=_peerID
@property(copy) NSData *selfNATIP;	// G=0x3705; S=0x3719; @synthesize=_selfNATIP
@property(copy) NSData *selfBlob;	// G=0x36cd; S=0x36e1; @synthesize=_selfBlob
@property(copy) NSNumber *selfNATType;	// G=0x3695; S=0x36a9; @synthesize=_selfNATType
@property(copy) NSData *selfPushToken;	// G=0x365d; S=0x3671; @synthesize=_selfPushToken
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x39f1
// declared property getter: - (id)peerRelayPort;	// 0x39dd
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x39b9
// declared property getter: - (id)peerRelayIP;	// 0x39a5
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x3981
// declared property getter: - (id)selfRelayPort;	// 0x396d
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x3949
// declared property getter: - (id)selfRelayIP;	// 0x3935
// declared property setter: - (void)setRelayTokenAllocReq:(id)req;	// 0x3911
// declared property getter: - (id)relayTokenAllocReq;	// 0x38fd
// declared property setter: - (void)setRelayTransactionIdAlloc:(id)alloc;	// 0x38d9
// declared property getter: - (id)relayTransactionIdAlloc;	// 0x38c5
// declared property setter: - (void)setRelayConnectionId:(id)anId;	// 0x38a1
// declared property getter: - (id)relayConnectionId;	// 0x388d
// declared property setter: - (void)setRelayType:(id)type;	// 0x3869
// declared property getter: - (id)relayType;	// 0x3855
// declared property setter: - (void)setPeerNATIP:(id)natip;	// 0x3831
// declared property getter: - (id)peerNATIP;	// 0x381d
// declared property setter: - (void)setPeerBlob:(id)blob;	// 0x37f9
// declared property getter: - (id)peerBlob;	// 0x37e5
// declared property setter: - (void)setPeerNATType:(id)type;	// 0x37c1
// declared property getter: - (id)peerNATType;	// 0x37ad
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x3789
// declared property getter: - (id)peerPushToken;	// 0x3775
// declared property setter: - (void)setPeerID:(id)anId;	// 0x3751
// declared property getter: - (id)peerID;	// 0x373d
// declared property setter: - (void)setSelfNATIP:(id)natip;	// 0x3719
// declared property getter: - (id)selfNATIP;	// 0x3705
// declared property setter: - (void)setSelfBlob:(id)blob;	// 0x36e1
// declared property getter: - (id)selfBlob;	// 0x36cd
// declared property setter: - (void)setSelfNATType:(id)type;	// 0x36a9
// declared property getter: - (id)selfNATType;	// 0x3695
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x3671
// declared property getter: - (id)selfPushToken;	// 0x365d
- (void)handleResponseDictionary:(id)dictionary;	// 0x3461
- (id)messageBody;	// 0x2f65
- (id)requiredKeys;	// 0x2e39
- (id)bagKey;	// 0x2e2d
- (void)dealloc;	// 0x2d41
- (id)copyWithZone:(NSZone *)zone;	// 0x2d15
@end