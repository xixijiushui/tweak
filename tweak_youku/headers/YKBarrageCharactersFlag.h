//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YKBarrageCharactersFlag : NSObject
{
    NSMutableArray *_flagsArray;
}

@property(retain, nonatomic) NSMutableArray *flagsArray; // @synthesize flagsArray=_flagsArray;
- (void).cxx_destruct;
- (_Bool)hasCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)removeCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)addCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithMaxLength:(unsigned long long)arg1;

@end

