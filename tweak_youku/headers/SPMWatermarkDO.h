//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPMWatermarkDO : NSObject
{
    int _type;
    NSString *_categoryId;
    NSString *_id;
    NSString *_status;
    NSString *_publishStatus;
    NSString *_theDescription;
    NSString *_gmtCreate;
    NSString *_gmtModified;
    NSString *_name;
    NSString *_picUrl;
    NSString *_referId;
    NSString *_latest;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *latest; // @synthesize latest=_latest;
@property(copy, nonatomic) NSString *referId; // @synthesize referId=_referId;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *gmtModified; // @synthesize gmtModified=_gmtModified;
@property(copy, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(copy, nonatomic) NSString *theDescription; // @synthesize theDescription=_theDescription;
@property(copy, nonatomic) NSString *publishStatus; // @synthesize publishStatus=_publishStatus;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

