//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface SKIconsView : UIView
{
    NSMutableArray *_iconsArray;
    NSMutableArray *_modelArray;
}

@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @synthesize iconsArray=_iconsArray;
- (void).cxx_destruct;
- (void)refreshWithModes:(id)arg1;
- (void)initData;
- (id)init;

@end
