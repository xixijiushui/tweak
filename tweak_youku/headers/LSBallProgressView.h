//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface LSBallProgressView : UIView
{
    unsigned long long _itemNum;
    UIView *_slideView;
}

@property(retain, nonatomic) UIView *slideView; // @synthesize slideView=_slideView;
@property(nonatomic) unsigned long long itemNum; // @synthesize itemNum=_itemNum;
- (void).cxx_destruct;
- (void)adjustSlideViewWithProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
