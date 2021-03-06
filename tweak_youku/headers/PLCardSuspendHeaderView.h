//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface PLCardSuspendHeaderView : UIView
{
    _Bool _privateFavorite;
    _Bool _buttonAnimating;
    id <PLCardSuspendHeaderViewDelegate> _delegate;
    NSString *_title;
    unsigned long long _status;
    UILabel *_titleLabel;
    UIButton *_closeBtn;
    UIView *_separatorLine;
}

@property(nonatomic) _Bool buttonAnimating; // @synthesize buttonAnimating=_buttonAnimating;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool privateFavorite; // @synthesize privateFavorite=_privateFavorite;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PLCardSuspendHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeAction;
- (void)updateTitleLabel;
- (void)updateTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

