//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BPManager, NSString;

@protocol BPManagerDataSource <NSObject>
- (struct CGAffineTransform)playerManager:(BPManager *)arg1 transformForMode:(NSString *)arg2;
- (struct CGRect)playerManager:(BPManager *)arg1 frameForMode:(NSString *)arg2;
@end
