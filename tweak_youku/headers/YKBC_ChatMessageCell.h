//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSData, NSString, UIButton, UIImageView, UILabel, UIView, YKBC_ChatMessageContentButton, YKBC_ChatMessageFrame;

@interface YKBC_ChatMessageCell : UITableViewCell
{
    NSString *_voiceURL;
    NSData *_songData;
    UIView *_headImageBackView;
    _Bool _contentVoiceIsPlaying;
    YKBC_ChatMessageFrame *_messageFrame;
    id <UUMessageCellDelegate> _delegate;
    UILabel *_dateLabel;
    UILabel *_namelabel;
    UIButton *_headImageButton;
    UIButton *_defaultHeadImageButton;
    UIImageView *_ownerImgview;
    YKBC_ChatMessageContentButton *_btnContent;
}

@property(retain, nonatomic) YKBC_ChatMessageContentButton *btnContent; // @synthesize btnContent=_btnContent;
@property(retain, nonatomic) UIImageView *ownerImgview; // @synthesize ownerImgview=_ownerImgview;
@property(retain, nonatomic) UIButton *defaultHeadImageButton; // @synthesize defaultHeadImageButton=_defaultHeadImageButton;
@property(retain, nonatomic) UIButton *headImageButton; // @synthesize headImageButton=_headImageButton;
@property(retain, nonatomic) UILabel *namelabel; // @synthesize namelabel=_namelabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak id <UUMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKBC_ChatMessageFrame *messageFrame; // @synthesize messageFrame=_messageFrame;
- (void).cxx_destruct;
- (void)sensorStateChange:(id)arg1;
- (void)makeMaskView:(id)arg1 withImage:(id)arg2;
- (void)UUAVAudioPlayerDidFinishPlay;
- (void)UUAVAudioPlayerBeiginPlay;
- (void)UUAVAudioPlayerBeiginLoadVoice;
- (void)btnContentClick;
- (void)btnHeadImageClick:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

