//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlockVM.h"

@class NSAttributedString, NSString, UIImage;

@interface YKFCellOutlineBlockVM : YKFBlockVM
{
    NSAttributedString *_iconTitle;
    UIImage *_iconTagImage;
    NSString *_title;
    NSAttributedString *_subTitle;
}

@property(copy, nonatomic) NSAttributedString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconTagImage; // @synthesize iconTagImage=_iconTagImage;
@property(copy, nonatomic) NSAttributedString *iconTitle; // @synthesize iconTitle=_iconTitle;
- (void).cxx_destruct;
- (id)iconTagImageString;
- (Class)blockClass;
- (id)init;

@end
