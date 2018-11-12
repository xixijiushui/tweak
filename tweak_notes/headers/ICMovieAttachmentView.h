//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICImageAttachmentView.h"

@class CALayer, UIImage;

@interface ICMovieAttachmentView : ICImageAttachmentView
{
    _Bool _icaxIsShowingPlayer;
    CALayer *playButtonLayer;
    struct UIImage *playButtonImage;
    struct CGRect _playButtonFrame;
}

@property(nonatomic) struct CGRect playButtonFrame; // @synthesize playButtonFrame=_playButtonFrame;
@property(nonatomic) _Bool icaxIsShowingPlayer; // @synthesize icaxIsShowingPlayer=_icaxIsShowingPlayer;
@property(retain, nonatomic) UIImage *playButtonImage; // @synthesize playButtonImage;
@property(retain, nonatomic) CALayer *playButtonLayer; // @synthesize playButtonLayer;
- (void).cxx_destruct;
- (void)didTapAttachment:(id)arg1;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (void)willDeleteAttachment;
- (void)updateImageSize;
- (_Bool)shouldPlayFullscreenOnly;
- (_Bool)supportsFreeTransformGesture;
- (void)sharedInit;

@end

