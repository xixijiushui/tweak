//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTHTMLParserNode.h"

@class NSString;

@interface DTHTMLParserTextNode : DTHTMLParserNode
{
    NSString *_characters;
}

@property(readonly, nonatomic) NSString *characters; // @synthesize characters=_characters;
- (void).cxx_destruct;
- (void)_appendHTMLToString:(id)arg1 indentLevel:(unsigned long long)arg2;
- (id)description;
- (id)initWithCharacters:(id)arg1;

@end

