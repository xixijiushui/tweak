//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTFSignInCardView;

@interface TTFSignInCardPreviewView : UIView
{
    UIView *_backgroundView;
    id <TTFSignInCardViewModelProtocol> _cardItem;
    TTFSignInCardView *_cardView;
}

+ (id)showSignInCardPreviewWithViewModel:(id)arg1;
@property(retain, nonatomic) TTFSignInCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) id <TTFSignInCardViewModelProtocol> cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)dismiss;

@end

