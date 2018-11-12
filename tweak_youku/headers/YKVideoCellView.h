//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, DownloadShow, DownloadVideo, PrebookDownloadVideo, UILabel, YKVideoPriviewView;

@interface YKVideoCellView : UIView
{
    YKVideoPriviewView *_videoPriviewImgView;
    UILabel *_videoTitleLb;
    CALayer *_lineLayer;
    long long _titleRow;
    DownloadShow *_showModel;
    DownloadVideo *_videoModel;
    PrebookDownloadVideo *_preModel;
    _Bool _isEdit;
    _Bool _showBottomLine;
    id _modelObject;
}

+ (double)viewHeight;
+ (id)newFromCell:(id)arg1;
+ (id)viewFromCell:(id)arg1;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) id modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;
- (void)dealloc;
- (id)lineLayer;
- (id)videoTitleLb;
- (id)videoPriviewImgView;
- (void)layoutSubviews;
- (void)reloadVideoTitleLb;
- (void)reloadVideoPriviewImgView;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

@end

