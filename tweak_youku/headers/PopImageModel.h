//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VIPCMSAction;

@interface PopImageModel : NSObject
{
    NSString *_popImage;
    NSString *_popImageTime;
    VIPCMSAction *_action;
}

@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *popImageTime; // @synthesize popImageTime=_popImageTime;
@property(retain, nonatomic) NSString *popImage; // @synthesize popImage=_popImage;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end

