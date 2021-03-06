//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface DYKH5ActionSheetView : UIView
{
    _Bool _touchDismiss;
    CDUnknownBlockType _buttonActionBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_boardView;
}

+ (id)sheetViewWithStyle:(long long)arg1;
+ (id)sheetView;
@property(retain, nonatomic) UIView *boardView; // @synthesize boardView=_boardView;
@property(nonatomic) _Bool touchDismiss; // @synthesize touchDismiss=_touchDismiss;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType buttonActionBlock; // @synthesize buttonActionBlock=_buttonActionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect)layInBottomCenter:(struct CGSize)arg1 move:(struct CGPoint)arg2;
- (struct CGRect)layInBottomCenter:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)show;
- (void)buttonAction:(id)arg1;
- (void)cancelAction;
- (void)setItems;
- (void)setButtons:(id)arg1 title:(id)arg2 tag:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

