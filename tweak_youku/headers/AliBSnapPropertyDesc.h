//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AliBSnapPropertyDesc : NSObject
{
    NSString *_elementName;
    NSString *_state;
    NSString *_propertyName;
}

+ (id)generateWithDesc:(id)arg1;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (void).cxx_destruct;
- (_Bool)isBegin;

@end
