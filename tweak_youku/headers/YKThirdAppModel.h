//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKThirdAppModel : NSObject
{
    NSString *_activity_path;
    NSString *_app_name;
    NSString *_app_str;
    NSString *_download_url;
    NSString *_icon_url;
    NSString *_idString;
    NSString *_position;
}

@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *idString; // @synthesize idString=_idString;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *app_str; // @synthesize app_str=_app_str;
@property(copy, nonatomic) NSString *app_name; // @synthesize app_name=_app_name;
@property(copy, nonatomic) NSString *activity_path; // @synthesize activity_path=_activity_path;
- (void).cxx_destruct;
- (_Bool)isInstalled;
- (id)initWithDictionary:(id)arg1;

@end

