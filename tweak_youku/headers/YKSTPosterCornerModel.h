//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSAction, NSString;

@interface YKSTPosterCornerModel : NSObject
{
    NSString *_title;
    NSString *_type;
    CMSAction *_action;
}

@property(retain, nonatomic) CMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

