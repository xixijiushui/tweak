//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseModel.h"

#import "YKFReplyToolTopicPluginDataModelProtocol.h"

@class NSString;

@interface YKFReplyToolTopicPluginDataModel : ALMBaseModel <YKFReplyToolTopicPluginDataModelProtocol>
{
    NSString *_name;
    long long _topicId;
}

@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
