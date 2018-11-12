//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, YKFStararrivalModelIndexPO;

@interface YKFStarCommingDetailSubPageItem : NSObject
{
    _Bool _underway;
    NSString *_pageClassName;
    NSAttributedString *_title_normal;
    NSAttributedString *_title_highlight;
    long long _pageType;
    YKFStararrivalModelIndexPO *_indexPO;
}

+ (id)pageItemWithYKFCommunityplayModelIndexPO:(id)arg1 gmtNow:(long long)arg2;
@property(retain, nonatomic) YKFStararrivalModelIndexPO *indexPO; // @synthesize indexPO=_indexPO;
@property(nonatomic) _Bool underway; // @synthesize underway=_underway;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSAttributedString *title_highlight; // @synthesize title_highlight=_title_highlight;
@property(retain, nonatomic) NSAttributedString *title_normal; // @synthesize title_normal=_title_normal;
@property(copy, nonatomic) NSString *pageClassName; // @synthesize pageClassName=_pageClassName;
- (void).cxx_destruct;
- (void)updateItemWithYKFCommunityplayModelIndexPO:(id)arg1 gmtNow:(long long)arg2;
- (id)_createTitleWithTitleString:(id)arg1 status:(id)arg2 highlight:(_Bool)arg3;
- (id)_fetchSubItemStatusWithModelID:(id)arg1 gmtStart:(long long)arg2 gmtEnd:(long long)arg3 gmtNow:(long long)arg4;
- (id)_createDateStringWithGmtStart:(long long)arg1 gmtEnd:(long long)arg2 gmtNow:(long long)arg3;
- (id)_createDateStringForSigninWithGmtStart:(long long)arg1;
- (_Bool)_checkUnderwayStatusWithGmtStart:(long long)arg1 gmtEnd:(long long)arg2 gmtNow:(long long)arg3;
- (long long)_fetchSubItemTypeWithModelID:(id)arg1;
- (id)_fetchSubItemTitleWithModelID:(id)arg1;
- (id)_fetchSubItemVCNameWithModelID:(id)arg1;

@end

