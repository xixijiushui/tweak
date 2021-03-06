//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface YKMediaEditorBottomBarView : UIView
{
    CDUnknownBlockType _OnButtonClick;
    NSMutableArray *_buttonArray;
    NSArray *_titleArray;
}

@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(copy, nonatomic) CDUnknownBlockType OnButtonClick; // @synthesize OnButtonClick=_OnButtonClick;
- (void).cxx_destruct;
- (void)bottomBtnClickWithText:(id)arg1;
- (void)bottomBtnClick:(id)arg1;
- (id)createButtonWithTitle:(id)arg1 image:(id)arg2;
- (void)layoutSubviews;
- (void)addButtonsWithTitles:(id)arg1 andImages:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

