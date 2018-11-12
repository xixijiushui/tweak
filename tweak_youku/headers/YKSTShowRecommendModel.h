//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSAction, NSDictionary, NSString;

@interface YKSTShowRecommendModel : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_desc;
    NSString *_icon;
    NSString *_type;
    NSString *_score;
    NSString *_img;
    CMSAction *_action;
    NSDictionary *_extend;
}

@property(retain, nonatomic) NSDictionary *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) CMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
