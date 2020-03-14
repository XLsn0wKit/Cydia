/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <YouTube/YouTube-Structs.h>
#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest, NSMutableArray;

@interface YTSubscriptionsRequest : XMLSAXHTTPRequest {
	id _delegate;	// 148 = 0x94
	NSMutableArray *_subscriptions;	// 152 = 0x98
	int _mode;	// 156 = 0x9c
	NSMutableURLRequest *_deferredRequest;	// 160 = 0xa0
}
+ (id)displayStringForSubscription:(id)subscription;	// 0x12d65
+ (BOOL)isSubscription:(id)subscription channelOfUser:(id)user;	// 0x12ce5
+ (id)URLForSubscription:(id)subscription;	// 0x12cc5
- (id)init;	// 0x12c39
- (void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;	// 0x13729
- (void)dealloc;	// 0x136b5
- (int)parseData:(id)data;	// 0x13625
- (void)didParseData;	// 0x135e9
- (void)_didAuthenticate:(id)authenticate;	// 0x134fd
- (void)_failedToAuthenticate:(id)authenticate;	// 0x13479
- (void)loadRequest:(id)request;	// 0x133e5
- (void)_doRequestWithURL:(id)url;	// 0x1338d
- (void)requestSubscriptions;	// 0x132a5
- (void)requestPlaylists;	// 0x131bd
- (void)createPlaylistNamed:(id)named;	// 0x12ff9
- (void)subscribeToUser:(id)user;	// 0x12e81
- (void)failWithError:(id)error;	// 0x12e0d
- (void)setDelegate:(id)delegate;	// 0x12c29
@end