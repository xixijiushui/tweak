//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBNewVersionModel : NSObject
{
    NSString *_etag;
    NSString *_channelNum;
    NSString *_md5;
    NSString *_packageUrl;
    NSString *_httpsUrl;
    NSString *_size;
    NSString *_version;
    NSString *_remindCount;
    NSString *_remindStrategy;
    NSString *_info;
    NSString *_info2;
    NSString *_info3;
}

@property(retain, nonatomic) NSString *info3; // @synthesize info3=_info3;
@property(retain, nonatomic) NSString *info2; // @synthesize info2=_info2;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *remindStrategy; // @synthesize remindStrategy=_remindStrategy;
@property(retain, nonatomic) NSString *remindCount; // @synthesize remindCount=_remindCount;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *httpsUrl; // @synthesize httpsUrl=_httpsUrl;
@property(retain, nonatomic) NSString *packageUrl; // @synthesize packageUrl=_packageUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *channelNum; // @synthesize channelNum=_channelNum;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

