//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier
{
    float _GLfloatValue;
    float _proposedGLfloatValue;
}

@property(nonatomic) float proposedGLfloatValue; // @synthesize proposedGLfloatValue=_proposedGLfloatValue;
@property(readonly, nonatomic) float GLfloatValue; // @synthesize GLfloatValue=_GLfloatValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

