//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class NSString;

@interface OtherSiteData : SKBaseModel
{
    NSString *_source_id;
    NSString *_source_name;
    NSString *_play_mode;
}

@property(retain, nonatomic) NSString *play_mode; // @synthesize play_mode=_play_mode;
@property(retain, nonatomic) NSString *source_name; // @synthesize source_name=_source_name;
@property(retain, nonatomic) NSString *source_id; // @synthesize source_id=_source_id;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

