//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKFStarProductionCategoryViewModel : NSObject
{
    _Bool _hasMore;
    long long _type;
    NSString *_name;
    NSString *_url;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)moreCtrlName;
- (id)moreSpmCD;
- (id)spmC;
- (_Bool)showTimeLine;
- (_Bool)isLandscapeView;

@end

