//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSArray, NSMutableArray;

@interface ViewTypeCustom_FilterModel : ViewTypeBaseModel
{
    CDUnknownBlockType _callback;
    NSMutableArray *_selectionIndexs;
    NSMutableArray *_showbig_filter;
    NSArray *_cateNames;
}

@property(retain, nonatomic) NSArray *cateNames; // @synthesize cateNames=_cateNames;
@property(retain, nonatomic) NSMutableArray *showbig_filter; // @synthesize showbig_filter=_showbig_filter;
@property(retain, nonatomic) NSMutableArray *selectionIndexs; // @synthesize selectionIndexs=_selectionIndexs;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)initWithFilterModel:(id)arg1 cateNames:(id)arg2;

@end
