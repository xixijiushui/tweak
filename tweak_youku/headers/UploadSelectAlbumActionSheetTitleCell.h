//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface UploadSelectAlbumActionSheetTitleCell : UIView
{
    UIButton *_closeButton;
    UILabel *_InfoLabel;
    UIView *_separatorView;
    CDUnknownBlockType _OnCloseButtonClick;
}

+ (double)height;
@property(copy, nonatomic) CDUnknownBlockType OnCloseButtonClick; // @synthesize OnCloseButtonClick=_OnCloseButtonClick;
- (void).cxx_destruct;
- (void)closeButtonClick:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
