//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface SKTopicSubModel : ViewTypeBaseModel
{
    _Bool _isShow;
    NSString *_title;
    long long _topic_id;
    NSString *_url;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

