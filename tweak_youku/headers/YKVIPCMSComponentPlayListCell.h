//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CMSComponentCellProtocol.h"
#import "CardVideoViewDelegate.h"

@class NSMutableArray, NSString, UILabel, VIPCMSCardVideo, YKVIPCardVideoView, YKVIPFeedbackButton, YKVIPFeedbackPopButton;

@interface YKVIPCMSComponentPlayListCell : UITableViewCell <CardVideoViewDelegate, CMSComponentCellProtocol>
{
    YKVIPCardVideoView *_cardVideoView;
    YKVIPFeedbackButton *_feedbackButton;
    YKVIPFeedbackPopButton *_popFPButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    NSMutableArray *_tagViewsArray;
    VIPCMSCardVideo *_cardVideo;
}

@property(retain, nonatomic) VIPCMSCardVideo *cardVideo; // @synthesize cardVideo=_cardVideo;
@property(retain, nonatomic) NSMutableArray *tagViewsArray; // @synthesize tagViewsArray=_tagViewsArray;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YKVIPFeedbackPopButton *popFPButton; // @synthesize popFPButton=_popFPButton;
@property(retain, nonatomic) YKVIPFeedbackButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) YKVIPCardVideoView *cardVideoView; // @synthesize cardVideoView=_cardVideoView;
- (void).cxx_destruct;
- (void)tapTips;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)didSelectTagBtn:(id)arg1;
- (void)refreshWithCardVideo:(id)arg1;
- (void)setupModel:(id)arg1;
- (void)clickPopFeedback:(id)arg1;
- (void)clickFeedback:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
