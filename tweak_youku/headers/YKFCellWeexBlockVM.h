//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlockVM.h"

@class NSDictionary, NSString;

@interface YKFCellWeexBlockVM : YKFBlockVM
{
    _Bool _forceRefresh;
    NSString *_weexUrl;
    NSString *_maskImageUrl;
    NSDictionary *_weexModelDict;
}

@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(retain, nonatomic) NSDictionary *weexModelDict; // @synthesize weexModelDict=_weexModelDict;
@property(copy, nonatomic) NSString *maskImageUrl; // @synthesize maskImageUrl=_maskImageUrl;
@property(copy, nonatomic) NSString *weexUrl; // @synthesize weexUrl=_weexUrl;
- (void).cxx_destruct;
- (Class)blockClass;
- (id)init;

@end
