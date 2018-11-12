//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel, YKSubjectInfoModel;

@interface YKSubjectInfoView : UIView
{
    CDUnknownBlockType _TapActionBlock;
    UILabel *_titleLabel;
    UIImageView *_jumpView;
    UILabel *_detailLabel;
    UILabel *_extraLabel;
    YKSubjectInfoModel *_subjectInfoModel;
    NSString *_videoCountDescText;
    NSString *_timeDescText;
    struct UIEdgeInsets _padding;
}

@property(copy, nonatomic) NSString *timeDescText; // @synthesize timeDescText=_timeDescText;
@property(copy, nonatomic) NSString *videoCountDescText; // @synthesize videoCountDescText=_videoCountDescText;
@property(retain, nonatomic) YKSubjectInfoModel *subjectInfoModel; // @synthesize subjectInfoModel=_subjectInfoModel;
@property(retain, nonatomic) UILabel *extraLabel; // @synthesize extraLabel=_extraLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *jumpView; // @synthesize jumpView=_jumpView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) CDUnknownBlockType TapActionBlock; // @synthesize TapActionBlock=_TapActionBlock;
- (void).cxx_destruct;
- (void)setupWithSubjectInfoModel:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)reloadFrame;
- (void)layoutSubviews;
- (void)setupView;
- (id)init;

@end

