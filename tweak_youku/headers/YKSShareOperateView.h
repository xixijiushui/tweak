//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIScrollView, YKSShareModel;

@interface YKSShareOperateView : UIView
{
    UIScrollView *_shareScrollView;
    NSArray *_openPlatformArray;
    id <YKSShareOperateViewDelegate> _shareOperateViewDelegate;
    YKSShareModel *_shareModel;
}

@property(retain, nonatomic) YKSShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(nonatomic) __weak id <YKSShareOperateViewDelegate> shareOperateViewDelegate; // @synthesize shareOperateViewDelegate=_shareOperateViewDelegate;
@property(copy, nonatomic) NSArray *openPlatformArray; // @synthesize openPlatformArray=_openPlatformArray;
@property(retain, nonatomic) UIScrollView *shareScrollView; // @synthesize shareScrollView=_shareScrollView;
- (void).cxx_destruct;
- (void)saveQRImage:(id)arg1;
- (void)openPlatform:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withShareModel:(id)arg2 shareViewType:(int)arg3 shareInfo:(id)arg4;

@end
