//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKAntiBlockShareView, YKShareInfoItem;

@protocol YKAntiBlockShareViewDelegate <NSObject>
- (void)needDismiss:(YKAntiBlockShareView *)arg1;
- (void)didSelectPlatform:(int)arg1 shareInfo:(YKShareInfoItem *)arg2;
@end

