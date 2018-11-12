//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VIPCMSAction;

@interface YKVIPTag : NSObject
{
    NSString *_tagId;
    NSString *_title;
    VIPCMSAction *_action;
    double _titleWidth;
}

@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (void)updateTextWidth;
- (id)initWithTagInfo:(id)arg1;

@end
