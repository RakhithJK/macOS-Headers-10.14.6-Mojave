//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAKit/OSADefinition.h>

@class NSMutableArray, OSADocumentationDefinition;

@interface OSAVerbDefinition : OSADefinition
{
    NSMutableArray *_parameterDefinitions;
    OSADocumentationDefinition *_documentation;
}

- (void)addParameterDefinition:(id)arg1;
- (void)setDocumentation:(id)arg1;
- (id)documentation;
- (void)setParameterDefinitions:(id)arg1;
- (id)parameterDefinitions;
- (void)dealloc;
- (id)init;

@end

