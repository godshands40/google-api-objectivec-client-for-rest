// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud TPU API (tpu/v1alpha1)
// Description:
//   TPU API provides customers with access to Google TPU technology.
// Documentation:
//   https://cloud.google.com/tpu/

#import "GTLRTPUQuery.h"

#import "GTLRTPUObjects.h"

@implementation GTLRTPUQuery

@dynamic fields;

@end

@implementation GTLRTPUQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRTPUQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Location class];
  query.loggingName = @"tpu.projects.locations.get";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/locations";
  GTLRTPUQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_ListLocationsResponse class];
  query.loggingName = @"tpu.projects.locations.list";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesCreate

@dynamic nodeId, parent;

+ (instancetype)queryWithObject:(GTLRTPU_Node *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/nodes";
  GTLRTPUQuery_ProjectsLocationsNodesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRTPU_Operation class];
  query.loggingName = @"tpu.projects.locations.nodes.create";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRTPUQuery_ProjectsLocationsNodesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Operation class];
  query.loggingName = @"tpu.projects.locations.nodes.delete";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRTPUQuery_ProjectsLocationsNodesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Node class];
  query.loggingName = @"tpu.projects.locations.nodes.get";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1alpha1/{+parent}/nodes";
  GTLRTPUQuery_ProjectsLocationsNodesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRTPU_ListNodesResponse class];
  query.loggingName = @"tpu.projects.locations.nodes.list";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesReimage

@dynamic name;

+ (instancetype)queryWithObject:(GTLRTPU_ReimageNodeRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}:reimage";
  GTLRTPUQuery_ProjectsLocationsNodesReimage *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Operation class];
  query.loggingName = @"tpu.projects.locations.nodes.reimage";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsNodesReset

@dynamic name;

+ (instancetype)queryWithObject:(GTLRTPU_ResetNodeRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}:reset";
  GTLRTPUQuery_ProjectsLocationsNodesReset *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Operation class];
  query.loggingName = @"tpu.projects.locations.nodes.reset";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}:cancel";
  GTLRTPUQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Empty class];
  query.loggingName = @"tpu.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRTPUQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Empty class];
  query.loggingName = @"tpu.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}";
  GTLRTPUQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_Operation class];
  query.loggingName = @"tpu.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRTPUQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1alpha1/{+name}/operations";
  GTLRTPUQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRTPU_ListOperationsResponse class];
  query.loggingName = @"tpu.projects.locations.operations.list";
  return query;
}

@end
