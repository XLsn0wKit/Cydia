/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : XXUnknownSuperclass {
@private
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x970bd
- (void)dealloc;	// 0x921a5
- (int)deleteObject:(unsigned)object;	// 0x9b739
- (int)selectInto:(int)into :(id)arg2;	// 0x99139
- (void)clear;	// 0x9d645
- (unsigned)insertPos;	// 0x99021
- (int)putObject:(id)object :(unsigned)arg2;	// 0x98e31
- (id)getObject:(unsigned)object;	// 0x2c7ff9
- (int)size;	// 0x1802e1
@end