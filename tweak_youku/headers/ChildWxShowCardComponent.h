//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxBaseCardComponent.h"

@class ChildShowCardViewController, UIView, YoukuShowAllBaseRBO;

@interface ChildWxShowCardComponent : ChildWxBaseCardComponent
{
    _Bool _showLastPlay;
    _Bool _showSequence;
    YoukuShowAllBaseRBO *_data;
    ChildShowCardViewController *_cardController;
    UIView *_contentView;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool showSequence; // @synthesize showSequence=_showSequence;
@property(nonatomic) _Bool showLastPlay; // @synthesize showLastPlay=_showLastPlay;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ChildShowCardViewController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) YoukuShowAllBaseRBO *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)getShowName;
- (id)getSeriesId;
- (id)getShowId;
- (struct CGRect)cardRectForBounds:(struct CGRect)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

