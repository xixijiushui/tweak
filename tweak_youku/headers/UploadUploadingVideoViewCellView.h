//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TRFUploadTask, UIImageView, UILabel;

@interface UploadUploadingVideoViewCellView : UIView
{
    _Bool _privacy;
    _Bool _showBlockedReasonWhenStateIsNormal;
    _Bool _pre_publish_status;
    TRFUploadTask *_task;
    NSString *_pubdate;
    NSString *_view_count;
    NSString *_blocked_reason;
    long long _state;
    NSString *_expect_publish_time;
    UIImageView *_bgImageView;
    UIImageView *_stateImageView;
    UIImageView *_shadowImageView;
    UILabel *_timeLabel;
    UIImageView *_privacyImageView;
}

@property(retain, nonatomic) UIImageView *privacyImageView; // @synthesize privacyImageView=_privacyImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool pre_publish_status; // @synthesize pre_publish_status=_pre_publish_status;
@property(retain, nonatomic) NSString *expect_publish_time; // @synthesize expect_publish_time=_expect_publish_time;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *blocked_reason; // @synthesize blocked_reason=_blocked_reason;
@property(retain, nonatomic) NSString *view_count; // @synthesize view_count=_view_count;
@property(nonatomic) _Bool showBlockedReasonWhenStateIsNormal; // @synthesize showBlockedReasonWhenStateIsNormal=_showBlockedReasonWhenStateIsNormal;
@property(retain, nonatomic) NSString *pubdate; // @synthesize pubdate=_pubdate;
@property(nonatomic) _Bool privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) TRFUploadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)drawProgressAtPoint:(struct CGPoint)arg1 content:(struct CGContext *)arg2 taskProgress:(float)arg3;
- (void)drawUploadStatusStringAtPoint:(struct CGPoint)arg1 writeString:(id)arg2 useDefaultTextColor:(_Bool)arg3;
- (void)setUploadFailed:(struct CGContext *)arg1;
- (void)setWait:(struct CGContext *)arg1;
- (void)setPause:(struct CGContext *)arg1;
- (void)setUploading:(struct CGContext *)arg1;
- (void)setVideoState;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCommonListView:(struct CGRect)arg1;
- (void)SetStateImageViewColor:(id)arg1 image:(id)arg2;
- (void)setCommonListObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

