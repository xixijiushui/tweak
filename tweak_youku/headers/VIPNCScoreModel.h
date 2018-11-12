//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VIPNCScoreButtonModel;

@interface VIPNCScoreModel : NSObject
{
    NSString *_content;
    NSString *_grade;
    NSString *_icon;
    NSString *_nextGrade;
    NSString *_nextScore;
    long long _score;
    VIPNCScoreButtonModel *_scoreBtnModel;
}

@property(retain, nonatomic) VIPNCScoreButtonModel *scoreBtnModel; // @synthesize scoreBtnModel=_scoreBtnModel;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *nextScore; // @synthesize nextScore=_nextScore;
@property(retain, nonatomic) NSString *nextGrade; // @synthesize nextGrade=_nextGrade;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end
