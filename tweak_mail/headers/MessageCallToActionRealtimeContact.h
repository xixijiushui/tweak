//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageCallToAction.h"

@class NSString, SGRealtimeContact;

@interface MessageCallToActionRealtimeContact : MessageCallToAction
{
    NSString *_title;
    NSString *_subtitle;
}

+ (id)callToActionForRealtimeContact:(id)arg1;
- (id)supplementaryActionTitle;
- (id)secondaryActionTitle;
- (id)primaryActionTitle;
- (id)subtitle;
- (id)title;
@property(readonly, retain, nonatomic) SGRealtimeContact *realtimeContact;
- (id)bundleIdentifier;
- (long long)compare:(id)arg1;
- (void)dealloc;

@end

