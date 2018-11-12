//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@interface CardContext : NSObject
{
    long long _type;
    long long _state;
    long long _mode;
    NSString *_clazz;
    NSString *_parser;
    NSString *_title;
    NSString *_descrip;
    NSString *_iconPath;
    NSDictionary *_cardInfo;
    id _json;
    NSError *_error;
    long long _cardIndex;
    long long _extensionType;
    NSString *_extensionClazz;
}

@property(copy, nonatomic) NSString *extensionClazz; // @synthesize extensionClazz=_extensionClazz;
@property(nonatomic) long long extensionType; // @synthesize extensionType=_extensionType;
@property(nonatomic) long long cardIndex; // @synthesize cardIndex=_cardIndex;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id json; // @synthesize json=_json;
@property(retain, nonatomic) NSDictionary *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *descrip; // @synthesize descrip=_descrip;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *parser; // @synthesize parser=_parser;
@property(copy, nonatomic) NSString *clazz; // @synthesize clazz=_clazz;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)assembleData:(long long)arg1;
- (id)parseClassName:(long long)arg1;

@end
