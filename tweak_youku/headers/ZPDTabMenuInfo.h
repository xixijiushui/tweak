//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZPDTabMenuInfo : NSObject
{
    NSString *_name;
    NSString *_feedType;
    NSString *_extra;
    NSString *_pgcfeedtype;
    NSString *_pgcfeedid;
    NSString *_recappid;
    NSString *_sceneid;
    NSString *_context;
    NSString *_bizContext;
}

@property(copy, nonatomic) NSString *bizContext; // @synthesize bizContext=_bizContext;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *sceneid; // @synthesize sceneid=_sceneid;
@property(copy, nonatomic) NSString *recappid; // @synthesize recappid=_recappid;
@property(copy, nonatomic) NSString *pgcfeedid; // @synthesize pgcfeedid=_pgcfeedid;
@property(copy, nonatomic) NSString *pgcfeedtype; // @synthesize pgcfeedtype=_pgcfeedtype;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

