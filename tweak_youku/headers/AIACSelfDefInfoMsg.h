//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIACInfoMsg.h"

@class NSString;

@interface AIACSelfDefInfoMsg : AIACInfoMsg
{
    NSString *_data;
}

@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)fromDictionary:(id)arg1;
- (id)toDictionary;

@end

