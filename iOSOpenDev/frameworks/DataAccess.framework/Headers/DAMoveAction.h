/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction {
	NSString *_sourceContainerId;	// 20 = 0x14
	NSString *_sourceServerId;	// 24 = 0x18
	NSString *_destinationContainerId;	// 28 = 0x1c
}
@property(readonly, assign) NSString *destinationContainerId;	// G=0xa679; @synthesize=_destinationContainerId
@property(readonly, assign) NSString *sourceServerId;	// G=0xa669; @synthesize=_sourceServerId
@property(readonly, assign) NSString *sourceContainerId;	// G=0xa659; @synthesize=_sourceContainerId
// declared property getter: - (id)destinationContainerId;	// 0xa679
// declared property getter: - (id)sourceServerId;	// 0xa669
// declared property getter: - (id)sourceContainerId;	// 0xa659
- (void)encodeWithCoder:(id)coder;	// 0xa52d
- (id)initWithCoder:(id)coder;	// 0xa3d9
- (void)dealloc;	// 0xa365
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item sourceContainerId:(id)anId sourceServerId:(id)anId4 destinationContainerId:(id)anId5;	// 0xa2d5
@end