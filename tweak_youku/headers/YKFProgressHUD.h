//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFMBProgressHUD.h"

@interface YKFProgressHUD : YKFMBProgressHUD
{
    _Bool _isShowKeyBoard;
}

+ (id)showWithText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3 offset:(struct CGPoint)arg4 delegate:(id)arg5;
@property(nonatomic) _Bool isShowKeyBoard; // @synthesize isShowKeyBoard=_isShowKeyBoard;
- (void)updateForCurrentOrientationAnimated:(_Bool)arg1;

@end
