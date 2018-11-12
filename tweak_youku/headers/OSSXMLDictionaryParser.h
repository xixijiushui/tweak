//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface OSSXMLDictionaryParser : NSObject <NSXMLParserDelegate, NSCopying>
{
    _Bool _collapseTextNodes;
    _Bool _stripEmptyNodes;
    _Bool _trimWhiteSpace;
    _Bool _alwaysUseArrays;
    _Bool _preserveComments;
    _Bool _wrapRootNode;
    long long _attributesMode;
    long long _nodeNameMode;
    NSMutableDictionary *_root;
    NSMutableArray *_stack;
    NSMutableString *_text;
}

+ (id)XMLStringForNode:(id)arg1 withNodeName:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSMutableDictionary *root; // @synthesize root=_root;
@property(nonatomic) long long nodeNameMode; // @synthesize nodeNameMode=_nodeNameMode;
@property(nonatomic) long long attributesMode; // @synthesize attributesMode=_attributesMode;
@property(nonatomic) _Bool wrapRootNode; // @synthesize wrapRootNode=_wrapRootNode;
@property(nonatomic) _Bool preserveComments; // @synthesize preserveComments=_preserveComments;
@property(nonatomic) _Bool alwaysUseArrays; // @synthesize alwaysUseArrays=_alwaysUseArrays;
@property(nonatomic) _Bool trimWhiteSpace; // @synthesize trimWhiteSpace=_trimWhiteSpace;
@property(nonatomic) _Bool stripEmptyNodes; // @synthesize stripEmptyNodes=_stripEmptyNodes;
@property(nonatomic) _Bool collapseTextNodes; // @synthesize collapseTextNodes=_collapseTextNodes;
- (void).cxx_destruct;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)nameForNode:(id)arg1 inDictionary:(id)arg2;
- (void)addText:(id)arg1;
- (void)endText;
- (id)dictionaryWithFile:(id)arg1;
- (id)dictionaryWithString:(id)arg1;
- (id)dictionaryWithData:(id)arg1;
- (id)dictionaryWithParser:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

