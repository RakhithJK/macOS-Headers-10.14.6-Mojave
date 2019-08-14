//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TRenameOperation.h"

@interface TNewAliasOperation : TRenameOperation
{
    struct unordered_map<TFENode, std::__1::vector<std::__1::pair<TFENode, TFENodePropertyList>, std::__1::allocator<std::__1::pair<TFENode, TFENodePropertyList>>>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, std::__1::vector<std::__1::pair<TFENode, TFENodePropertyList>, std::__1::allocator<std::__1::pair<TFENode, TFENodePropertyList>>>>>> _recordsTable;
    struct __hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TFENode, std::__1::vector<std::__1::pair<TFENode, TFENodePropertyList>, std::__1::allocator<std::__1::pair<TFENode, TFENodePropertyList>>>>, void *>*>> {
        struct __hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TFENode, std::__1::vector<std::__1::pair<TFENode, TFENodePropertyList>, std::__1::allocator<std::__1::pair<TFENode, TFENodePropertyList>>>>, void *>*> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TFENode, std::__1::vector<std::__1::pair<TFENode, TFENodePropertyList>, std::__1::allocator<std::__1::pair<TFENode, TFENodePropertyList>>>>, void *>*> *__node_;
        } __i_;
    } _recordsTableIter;
    struct __wrap_iter<const std::__1::pair<TFENode, TFENodePropertyList>*> {
        struct pair<TFENode, TFENodePropertyList> *__i;
    } _recordIter;
    _Bool _addAliasSuffix;
    _Bool _creatingAliasInPBF;
    _Bool _isRenaming;
}

+ (id)operationWithNodes:(const struct TFENodeVector *)arg1 properties:(const vector_d50fdf79 *)arg2 destinationNode:(const struct TFENode *)arg3 allowInteraction:(_Bool)arg4 addAliasSuffix:(_Bool)arg5 delegate:(id)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)handleSuboperationCompleted:(unsigned int)arg1 targetNode:(const struct TFENode *)arg2;
- (int)createNewAlias:(const struct TFENode *)arg1 properties:(const struct TFENodePropertyList *)arg2 addAliasSuffix:(_Bool)arg3;
- (_Bool)isDoneCreatingAliases;
- (int)createNewAliases;
- (void)reconfigureToRenameNodes:(const struct TFENodeVector *)arg1;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;
- (id)makeDelegate;
- (struct TString)authorizationPrompt;

@end

