//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlockVM.h"

@class NSArray, NSAttributedString, NSString, YKFPostTopicInfo, YYTextLayout;

@interface YKFFeedCardPostContentBlockVM : YKFBlockVM
{
    NSAttributedString *_title;
    YYTextLayout *_titleLayout;
    NSAttributedString *_content;
    YYTextLayout *_contentLayout;
    NSString *_titleString;
    NSString *_contentString;
    long long _numOfLines;
    NSString *_tagsString;
    NSArray *_topicArray;
    YKFPostTopicInfo *_topicInfo;
}

@property(retain, nonatomic) YKFPostTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) NSArray *topicArray; // @synthesize topicArray=_topicArray;
@property(copy, nonatomic) NSString *tagsString; // @synthesize tagsString=_tagsString;
@property(nonatomic) long long numOfLines; // @synthesize numOfLines=_numOfLines;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) YYTextLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(retain, nonatomic) YYTextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (Class)blockClass;
- (id)init;

@end
