// This file is generated by tools/codegen.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Generators.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "linglong/api/types/v1/helper.hpp"

#include "linglong/api/types/v1/LinglongAPIV1.hpp"
#include "linglong/api/types/v1/UabMetaInfo.hpp"
#include "linglong/api/types/v1/Version.hpp"
#include "linglong/api/types/v1/Sections.hpp"
#include "linglong/api/types/v1/UabLayer.hpp"
#include "linglong/api/types/v1/RepositoryCache.hpp"
#include "linglong/api/types/v1/RepositoryCacheLayersItem.hpp"
#include "linglong/api/types/v1/RepoConfig.hpp"
#include "linglong/api/types/v1/PackageManager1UpdateParameters.hpp"
#include "linglong/api/types/v1/PackageManager1UninstallParameters.hpp"
#include "linglong/api/types/v1/PackageManager1SearchResult.hpp"
#include "linglong/api/types/v1/PackageManager1SearchParameters.hpp"
#include "linglong/api/types/v1/PackageManager1ModifyRepoParameters.hpp"
#include "linglong/api/types/v1/PackageManager1ResultWithTaskID.hpp"
#include "linglong/api/types/v1/PackageManager1InstallParameters.hpp"
#include "linglong/api/types/v1/PackageManager1Package.hpp"
#include "linglong/api/types/v1/PackageManager1GetRepoInfoResult.hpp"
#include "linglong/api/types/v1/PackageManager1GetRepoInfoResultRepoInfo.hpp"
#include "linglong/api/types/v1/PackageInfoV2.hpp"
#include "linglong/api/types/v1/PackageInfo.hpp"
#include "linglong/api/types/v1/OciConfigurationPatch.hpp"
#include "linglong/api/types/v1/LayerInfo.hpp"
#include "linglong/api/types/v1/InteractionRequest.hpp"
#include "linglong/api/types/v1/InteractionReply.hpp"
#include "linglong/api/types/v1/CommonResult.hpp"
#include "linglong/api/types/v1/CliContainer.hpp"
#include "linglong/api/types/v1/BuilderProject.hpp"
#include "linglong/api/types/v1/BuilderProjectSource.hpp"
#include "linglong/api/types/v1/BuilderProjectPackage.hpp"
#include "linglong/api/types/v1/BuilderConfig.hpp"
#include "linglong/api/types/v1/ApplicationConfiguration.hpp"
#include "linglong/api/types/v1/ApplicationConfigurationPermissions.hpp"
#include "linglong/api/types/v1/ApplicationConfigurationPermissionsInnerBind.hpp"
#include "linglong/api/types/v1/ApplicationConfigurationPermissionsBind.hpp"

namespace linglong {
namespace api {
namespace types {
namespace v1 {
void from_json(const json & j, ApplicationConfigurationPermissionsBind & x);
void to_json(json & j, const ApplicationConfigurationPermissionsBind & x);

void from_json(const json & j, ApplicationConfigurationPermissionsInnerBind & x);
void to_json(json & j, const ApplicationConfigurationPermissionsInnerBind & x);

void from_json(const json & j, ApplicationConfigurationPermissions & x);
void to_json(json & j, const ApplicationConfigurationPermissions & x);

void from_json(const json & j, ApplicationConfiguration & x);
void to_json(json & j, const ApplicationConfiguration & x);

void from_json(const json & j, BuilderConfig & x);
void to_json(json & j, const BuilderConfig & x);

void from_json(const json & j, BuilderProjectPackage & x);
void to_json(json & j, const BuilderProjectPackage & x);

void from_json(const json & j, BuilderProjectSource & x);
void to_json(json & j, const BuilderProjectSource & x);

void from_json(const json & j, BuilderProject & x);
void to_json(json & j, const BuilderProject & x);

void from_json(const json & j, CliContainer & x);
void to_json(json & j, const CliContainer & x);

void from_json(const json & j, CommonResult & x);
void to_json(json & j, const CommonResult & x);

void from_json(const json & j, InteractionReply & x);
void to_json(json & j, const InteractionReply & x);

void from_json(const json & j, InteractionRequest & x);
void to_json(json & j, const InteractionRequest & x);

void from_json(const json & j, LayerInfo & x);
void to_json(json & j, const LayerInfo & x);

void from_json(const json & j, OciConfigurationPatch & x);
void to_json(json & j, const OciConfigurationPatch & x);

void from_json(const json & j, PackageInfo & x);
void to_json(json & j, const PackageInfo & x);

void from_json(const json & j, PackageInfoV2 & x);
void to_json(json & j, const PackageInfoV2 & x);

void from_json(const json & j, PackageManager1GetRepoInfoResultRepoInfo & x);
void to_json(json & j, const PackageManager1GetRepoInfoResultRepoInfo & x);

void from_json(const json & j, PackageManager1GetRepoInfoResult & x);
void to_json(json & j, const PackageManager1GetRepoInfoResult & x);

void from_json(const json & j, PackageManager1Package & x);
void to_json(json & j, const PackageManager1Package & x);

void from_json(const json & j, PackageManager1InstallParameters & x);
void to_json(json & j, const PackageManager1InstallParameters & x);

void from_json(const json & j, PackageManager1ResultWithTaskID & x);
void to_json(json & j, const PackageManager1ResultWithTaskID & x);

void from_json(const json & j, PackageManager1ModifyRepoParameters & x);
void to_json(json & j, const PackageManager1ModifyRepoParameters & x);

void from_json(const json & j, PackageManager1SearchParameters & x);
void to_json(json & j, const PackageManager1SearchParameters & x);

void from_json(const json & j, PackageManager1SearchResult & x);
void to_json(json & j, const PackageManager1SearchResult & x);

void from_json(const json & j, PackageManager1UninstallParameters & x);
void to_json(json & j, const PackageManager1UninstallParameters & x);

void from_json(const json & j, PackageManager1UpdateParameters & x);
void to_json(json & j, const PackageManager1UpdateParameters & x);

void from_json(const json & j, RepoConfig & x);
void to_json(json & j, const RepoConfig & x);

void from_json(const json & j, RepositoryCacheLayersItem & x);
void to_json(json & j, const RepositoryCacheLayersItem & x);

void from_json(const json & j, RepositoryCache & x);
void to_json(json & j, const RepositoryCache & x);

void from_json(const json & j, UabLayer & x);
void to_json(json & j, const UabLayer & x);

void from_json(const json & j, Sections & x);
void to_json(json & j, const Sections & x);

void from_json(const json & j, UabMetaInfo & x);
void to_json(json & j, const UabMetaInfo & x);

void from_json(const json & j, LinglongAPIV1 & x);
void to_json(json & j, const LinglongAPIV1 & x);

void from_json(const json & j, Version & x);
void to_json(json & j, const Version & x);

inline void from_json(const json & j, ApplicationConfigurationPermissionsBind& x) {
x.destination = j.at("destination").get<std::string>();
x.source = j.at("source").get<std::string>();
}

inline void to_json(json & j, const ApplicationConfigurationPermissionsBind & x) {
j = json::object();
j["destination"] = x.destination;
j["source"] = x.source;
}

inline void from_json(const json & j, ApplicationConfigurationPermissionsInnerBind& x) {
x.destination = j.at("destination").get<std::string>();
x.source = j.at("source").get<std::string>();
}

inline void to_json(json & j, const ApplicationConfigurationPermissionsInnerBind & x) {
j = json::object();
j["destination"] = x.destination;
j["source"] = x.source;
}

inline void from_json(const json & j, ApplicationConfigurationPermissions& x) {
x.binds = get_stack_optional<std::vector<ApplicationConfigurationPermissionsBind>>(j, "binds");
x.innerBinds = get_stack_optional<std::vector<ApplicationConfigurationPermissionsInnerBind>>(j, "innerBinds");
}

inline void to_json(json & j, const ApplicationConfigurationPermissions & x) {
j = json::object();
if (x.binds) {
j["binds"] = x.binds;
}
if (x.innerBinds) {
j["innerBinds"] = x.innerBinds;
}
}

inline void from_json(const json & j, ApplicationConfiguration& x) {
x.permissions = get_stack_optional<ApplicationConfigurationPermissions>(j, "permissions");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const ApplicationConfiguration & x) {
j = json::object();
if (x.permissions) {
j["permissions"] = x.permissions;
}
j["version"] = x.version;
}

inline void from_json(const json & j, BuilderConfig& x) {
x.arch = get_stack_optional<std::string>(j, "arch");
x.cache = get_stack_optional<std::string>(j, "cache");
x.offline = get_stack_optional<bool>(j, "offline");
x.repo = j.at("repo").get<std::string>();
x.skipCommitOutput = get_stack_optional<bool>(j, "skip_commit_output");
x.skipFetchSource = get_stack_optional<bool>(j, "skip_fetch_source");
x.skipPullDepend = get_stack_optional<bool>(j, "skip_pull_depend");
x.skipRunContainer = get_stack_optional<bool>(j, "skip_run_container");
x.version = j.at("version").get<int64_t>();
}

inline void to_json(json & j, const BuilderConfig & x) {
j = json::object();
if (x.arch) {
j["arch"] = x.arch;
}
if (x.cache) {
j["cache"] = x.cache;
}
if (x.offline) {
j["offline"] = x.offline;
}
j["repo"] = x.repo;
if (x.skipCommitOutput) {
j["skip_commit_output"] = x.skipCommitOutput;
}
if (x.skipFetchSource) {
j["skip_fetch_source"] = x.skipFetchSource;
}
if (x.skipPullDepend) {
j["skip_pull_depend"] = x.skipPullDepend;
}
if (x.skipRunContainer) {
j["skip_run_container"] = x.skipRunContainer;
}
j["version"] = x.version;
}

inline void from_json(const json & j, BuilderProjectPackage& x) {
x.architecture = get_stack_optional<std::string>(j, "architecture");
x.channel = get_stack_optional<std::string>(j, "channel");
x.description = j.at("description").get<std::string>();
x.id = j.at("id").get<std::string>();
x.kind = j.at("kind").get<std::string>();
x.name = j.at("name").get<std::string>();
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const BuilderProjectPackage & x) {
j = json::object();
if (x.architecture) {
j["architecture"] = x.architecture;
}
if (x.channel) {
j["channel"] = x.channel;
}
j["description"] = x.description;
j["id"] = x.id;
j["kind"] = x.kind;
j["name"] = x.name;
j["version"] = x.version;
}

inline void from_json(const json & j, BuilderProjectSource& x) {
x.commit = get_stack_optional<std::string>(j, "commit");
x.digest = get_stack_optional<std::string>(j, "digest");
x.kind = j.at("kind").get<std::string>();
x.name = get_stack_optional<std::string>(j, "name");
x.url = get_stack_optional<std::string>(j, "url");
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const BuilderProjectSource & x) {
j = json::object();
if (x.commit) {
j["commit"] = x.commit;
}
if (x.digest) {
j["digest"] = x.digest;
}
j["kind"] = x.kind;
if (x.name) {
j["name"] = x.name;
}
if (x.url) {
j["url"] = x.url;
}
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, BuilderProject& x) {
x.base = j.at("base").get<std::string>();
x.build = j.at("build").get<std::string>();
x.command = get_stack_optional<std::vector<std::string>>(j, "command");
x.exclude = get_stack_optional<std::vector<std::string>>(j, "exclude");
x.include = get_stack_optional<std::vector<std::string>>(j, "include");
x.modules = get_stack_optional<std::map<std::string, std::vector<std::string>>>(j, "modules");
x.package = j.at("package").get<BuilderProjectPackage>();
x.permissions = get_stack_optional<ApplicationConfigurationPermissions>(j, "permissions");
x.runtime = get_stack_optional<std::string>(j, "runtime");
x.sources = get_stack_optional<std::vector<BuilderProjectSource>>(j, "sources");
x.strip = get_stack_optional<std::string>(j, "strip");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const BuilderProject & x) {
j = json::object();
j["base"] = x.base;
j["build"] = x.build;
if (x.command) {
j["command"] = x.command;
}
if (x.exclude) {
j["exclude"] = x.exclude;
}
if (x.include) {
j["include"] = x.include;
}
if (x.modules) {
j["modules"] = x.modules;
}
j["package"] = x.package;
if (x.permissions) {
j["permissions"] = x.permissions;
}
if (x.runtime) {
j["runtime"] = x.runtime;
}
if (x.sources) {
j["sources"] = x.sources;
}
if (x.strip) {
j["strip"] = x.strip;
}
j["version"] = x.version;
}

inline void from_json(const json & j, CliContainer& x) {
x.id = j.at("id").get<std::string>();
x.package = j.at("package").get<std::string>();
x.pid = j.at("pid").get<int64_t>();
}

inline void to_json(json & j, const CliContainer & x) {
j = json::object();
j["id"] = x.id;
j["package"] = x.package;
j["pid"] = x.pid;
}

inline void from_json(const json & j, CommonResult& x) {
x.code = j.at("code").get<int64_t>();
x.message = j.at("message").get<std::string>();
}

inline void to_json(json & j, const CommonResult & x) {
j = json::object();
j["code"] = x.code;
j["message"] = x.message;
}

inline void from_json(const json & j, InteractionReply& x) {
x.action = get_stack_optional<std::string>(j, "action");
}

inline void to_json(json & j, const InteractionReply & x) {
j = json::object();
if (x.action) {
j["action"] = x.action;
}
}

inline void from_json(const json & j, InteractionRequest& x) {
x.actions = get_stack_optional<std::vector<std::string>>(j, "actions");
x.appName = j.at("appName").get<std::string>();
x.body = get_stack_optional<std::string>(j, "body");
x.summary = j.at("summary").get<std::string>();
x.timeout = j.at("timeout").get<int64_t>();
}

inline void to_json(json & j, const InteractionRequest & x) {
j = json::object();
if (x.actions) {
j["actions"] = x.actions;
}
j["appName"] = x.appName;
if (x.body) {
j["body"] = x.body;
}
j["summary"] = x.summary;
j["timeout"] = x.timeout;
}

inline void from_json(const json & j, LayerInfo& x) {
x.info = get_untyped(j, "info");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const LayerInfo & x) {
j = json::object();
j["info"] = x.info;
j["version"] = x.version;
}

inline void from_json(const json & j, OciConfigurationPatch& x) {
x.ociVersion = j.at("ociVersion").get<std::string>();
x.patch = j.at("patch").get<std::vector<nlohmann::json>>();
}

inline void to_json(json & j, const OciConfigurationPatch & x) {
j = json::object();
j["ociVersion"] = x.ociVersion;
j["patch"] = x.patch;
}

inline void from_json(const json & j, PackageInfo& x) {
x.appid = j.at("appid").get<std::string>();
x.arch = j.at("arch").get<std::vector<std::string>>();
x.base = j.at("base").get<std::string>();
x.channel = j.at("channel").get<std::string>();
x.command = get_stack_optional<std::vector<std::string>>(j, "command");
x.description = get_stack_optional<std::string>(j, "description");
x.kind = j.at("kind").get<std::string>();
x.packageInfoModule = j.at("module").get<std::string>();
x.name = j.at("name").get<std::string>();
x.permissions = get_stack_optional<ApplicationConfigurationPermissions>(j, "permissions");
x.runtime = get_stack_optional<std::string>(j, "runtime");
x.size = j.at("size").get<int64_t>();
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const PackageInfo & x) {
j = json::object();
j["appid"] = x.appid;
j["arch"] = x.arch;
j["base"] = x.base;
j["channel"] = x.channel;
if (x.command) {
j["command"] = x.command;
}
if (x.description) {
j["description"] = x.description;
}
j["kind"] = x.kind;
j["module"] = x.packageInfoModule;
j["name"] = x.name;
if (x.permissions) {
j["permissions"] = x.permissions;
}
if (x.runtime) {
j["runtime"] = x.runtime;
}
j["size"] = x.size;
j["version"] = x.version;
}

inline void from_json(const json & j, PackageInfoV2& x) {
x.arch = j.at("arch").get<std::vector<std::string>>();
x.base = j.at("base").get<std::string>();
x.channel = j.at("channel").get<std::string>();
x.command = get_stack_optional<std::vector<std::string>>(j, "command");
x.description = get_stack_optional<std::string>(j, "description");
x.id = j.at("id").get<std::string>();
x.kind = j.at("kind").get<std::string>();
x.packageInfoV2Module = j.at("module").get<std::string>();
x.name = j.at("name").get<std::string>();
x.permissions = get_stack_optional<ApplicationConfigurationPermissions>(j, "permissions");
x.runtime = get_stack_optional<std::string>(j, "runtime");
x.schemaVersion = j.at("schema_version").get<std::string>();
x.size = j.at("size").get<int64_t>();
x.uuid = get_stack_optional<std::string>(j, "uuid");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const PackageInfoV2 & x) {
j = json::object();
j["arch"] = x.arch;
j["base"] = x.base;
j["channel"] = x.channel;
if (x.command) {
j["command"] = x.command;
}
if (x.description) {
j["description"] = x.description;
}
j["id"] = x.id;
j["kind"] = x.kind;
j["module"] = x.packageInfoV2Module;
j["name"] = x.name;
if (x.permissions) {
j["permissions"] = x.permissions;
}
if (x.runtime) {
j["runtime"] = x.runtime;
}
j["schema_version"] = x.schemaVersion;
j["size"] = x.size;
if (x.uuid) {
j["uuid"] = x.uuid;
}
j["version"] = x.version;
}

inline void from_json(const json & j, PackageManager1GetRepoInfoResultRepoInfo& x) {
x.defaultRepo = j.at("defaultRepo").get<std::string>();
x.repos = j.at("repos").get<std::map<std::string, std::string>>();
}

inline void to_json(json & j, const PackageManager1GetRepoInfoResultRepoInfo & x) {
j = json::object();
j["defaultRepo"] = x.defaultRepo;
j["repos"] = x.repos;
}

inline void from_json(const json & j, PackageManager1GetRepoInfoResult& x) {
x.repoInfo = j.at("repoInfo").get<PackageManager1GetRepoInfoResultRepoInfo>();
x.code = j.at("code").get<int64_t>();
x.message = j.at("message").get<std::string>();
}

inline void to_json(json & j, const PackageManager1GetRepoInfoResult & x) {
j = json::object();
j["repoInfo"] = x.repoInfo;
j["code"] = x.code;
j["message"] = x.message;
}

inline void from_json(const json & j, PackageManager1Package& x) {
x.channel = get_stack_optional<std::string>(j, "channel");
x.id = j.at("id").get<std::string>();
x.packageManager1PackageModule = get_stack_optional<std::string>(j, "module");
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const PackageManager1Package & x) {
j = json::object();
if (x.channel) {
j["channel"] = x.channel;
}
j["id"] = x.id;
if (x.packageManager1PackageModule) {
j["module"] = x.packageManager1PackageModule;
}
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, PackageManager1InstallParameters& x) {
x.package = j.at("package").get<PackageManager1Package>();
}

inline void to_json(json & j, const PackageManager1InstallParameters & x) {
j = json::object();
j["package"] = x.package;
}

inline void from_json(const json & j, PackageManager1ResultWithTaskID& x) {
x.taskID = get_stack_optional<std::string>(j, "taskID");
x.code = j.at("code").get<int64_t>();
x.message = j.at("message").get<std::string>();
}

inline void to_json(json & j, const PackageManager1ResultWithTaskID & x) {
j = json::object();
if (x.taskID) {
j["taskID"] = x.taskID;
}
j["code"] = x.code;
j["message"] = x.message;
}

inline void from_json(const json & j, PackageManager1ModifyRepoParameters& x) {
x.defaultRepo = j.at("defaultRepo").get<std::string>();
x.repos = j.at("repos").get<std::map<std::string, std::string>>();
}

inline void to_json(json & j, const PackageManager1ModifyRepoParameters & x) {
j = json::object();
j["defaultRepo"] = x.defaultRepo;
j["repos"] = x.repos;
}

inline void from_json(const json & j, PackageManager1SearchParameters& x) {
x.id = j.at("id").get<std::string>();
}

inline void to_json(json & j, const PackageManager1SearchParameters & x) {
j = json::object();
j["id"] = x.id;
}

inline void from_json(const json & j, PackageManager1SearchResult& x) {
x.packages = get_stack_optional<std::vector<PackageInfoV2>>(j, "packages");
x.code = j.at("code").get<int64_t>();
x.message = j.at("message").get<std::string>();
}

inline void to_json(json & j, const PackageManager1SearchResult & x) {
j = json::object();
if (x.packages) {
j["packages"] = x.packages;
}
j["code"] = x.code;
j["message"] = x.message;
}

inline void from_json(const json & j, PackageManager1UninstallParameters& x) {
x.package = j.at("package").get<PackageManager1Package>();
}

inline void to_json(json & j, const PackageManager1UninstallParameters & x) {
j = json::object();
j["package"] = x.package;
}

inline void from_json(const json & j, PackageManager1UpdateParameters& x) {
x.packages = j.at("packages").get<std::vector<PackageManager1Package>>();
}

inline void to_json(json & j, const PackageManager1UpdateParameters & x) {
j = json::object();
j["packages"] = x.packages;
}

inline void from_json(const json & j, RepoConfig& x) {
x.defaultRepo = j.at("defaultRepo").get<std::string>();
x.repos = j.at("repos").get<std::map<std::string, std::string>>();
x.version = j.at("version").get<int64_t>();
}

inline void to_json(json & j, const RepoConfig & x) {
j = json::object();
j["defaultRepo"] = x.defaultRepo;
j["repos"] = x.repos;
j["version"] = x.version;
}

inline void from_json(const json & j, RepositoryCacheLayersItem& x) {
x.commit = j.at("commit").get<std::string>();
x.info = j.at("info").get<PackageInfoV2>();
x.repo = j.at("repo").get<std::string>();
}

inline void to_json(json & j, const RepositoryCacheLayersItem & x) {
j = json::object();
j["commit"] = x.commit;
j["info"] = x.info;
j["repo"] = x.repo;
}

inline void from_json(const json & j, RepositoryCache& x) {
x.config = j.at("config").get<RepoConfig>();
x.layers = j.at("layers").get<std::vector<RepositoryCacheLayersItem>>();
x.llVersion = j.at("ll-version").get<std::string>();
x.migratingStage = get_stack_optional<std::vector<int64_t>>(j, "migrating_stage");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const RepositoryCache & x) {
j = json::object();
j["config"] = x.config;
j["layers"] = x.layers;
j["ll-version"] = x.llVersion;
if (x.migratingStage) {
j["migrating_stage"] = x.migratingStage;
}
j["version"] = x.version;
}

inline void from_json(const json & j, UabLayer& x) {
x.info = j.at("info").get<PackageInfoV2>();
x.minified = j.at("minified").get<bool>();
}

inline void to_json(json & j, const UabLayer & x) {
j = json::object();
j["info"] = x.info;
j["minified"] = x.minified;
}

inline void from_json(const json & j, Sections& x) {
x.bundle = j.at("bundle").get<std::string>();
x.icon = get_stack_optional<std::string>(j, "icon");
}

inline void to_json(json & j, const Sections & x) {
j = json::object();
j["bundle"] = x.bundle;
if (x.icon) {
j["icon"] = x.icon;
}
}

inline void from_json(const json & j, UabMetaInfo& x) {
x.digest = j.at("digest").get<std::string>();
x.layers = j.at("layers").get<std::vector<UabLayer>>();
x.sections = j.at("sections").get<Sections>();
x.uuid = j.at("uuid").get<std::string>();
x.version = j.at("version").get<Version>();
}

inline void to_json(json & j, const UabMetaInfo & x) {
j = json::object();
j["digest"] = x.digest;
j["layers"] = x.layers;
j["sections"] = x.sections;
j["uuid"] = x.uuid;
j["version"] = x.version;
}

inline void from_json(const json & j, LinglongAPIV1& x) {
x.applicationConfiguration = get_stack_optional<ApplicationConfiguration>(j, "ApplicationConfiguration");
x.applicationConfigurationPermissions = get_stack_optional<ApplicationConfigurationPermissions>(j, "ApplicationConfigurationPermissions");
x.builderConfig = get_stack_optional<BuilderConfig>(j, "BuilderConfig");
x.builderProject = get_stack_optional<BuilderProject>(j, "BuilderProject");
x.cliContainer = get_stack_optional<CliContainer>(j, "CLIContainer");
x.commonResult = get_stack_optional<CommonResult>(j, "CommonResult");
x.interactionReply = get_stack_optional<InteractionReply>(j, "InteractionReply");
x.interactionRequest = get_stack_optional<InteractionRequest>(j, "InteractionRequest");
x.layerInfo = get_stack_optional<LayerInfo>(j, "LayerInfo");
x.ociConfigurationPatch = get_stack_optional<OciConfigurationPatch>(j, "OCIConfigurationPatch");
x.packageInfo = get_stack_optional<PackageInfo>(j, "PackageInfo");
x.packageInfoV2 = get_stack_optional<PackageInfoV2>(j, "PackageInfoV2");
x.packageManager1GetRepoInfoResult = get_stack_optional<PackageManager1GetRepoInfoResult>(j, "PackageManager1GetRepoInfoResult");
x.packageManager1InstallLayerFDResult = get_stack_optional<CommonResult>(j, "PackageManager1InstallLayerFDResult");
x.packageManager1InstallParameters = get_stack_optional<PackageManager1InstallParameters>(j, "PackageManager1InstallParameters");
x.packageManager1InstallResult = get_stack_optional<PackageManager1ResultWithTaskID>(j, "PackageManager1InstallResult");
x.packageManager1MigrateResult = get_stack_optional<CommonResult>(j, "PackageManager1MigrateResult");
x.packageManager1ModifyRepoParameters = get_stack_optional<PackageManager1ModifyRepoParameters>(j, "PackageManager1ModifyRepoParameters");
x.packageManager1ModifyRepoResult = get_stack_optional<CommonResult>(j, "PackageManager1ModifyRepoResult");
x.packageManager1Package = get_stack_optional<PackageManager1Package>(j, "PackageManager1Package");
x.packageManager1SearchParameters = get_stack_optional<PackageManager1SearchParameters>(j, "PackageManager1SearchParameters");
x.packageManager1SearchResult = get_stack_optional<PackageManager1SearchResult>(j, "PackageManager1SearchResult");
x.packageManager1UninstallParameters = get_stack_optional<PackageManager1UninstallParameters>(j, "PackageManager1UninstallParameters");
x.packageManager1UninstallResult = get_stack_optional<CommonResult>(j, "PackageManager1UninstallResult");
x.packageManager1UpdateParameters = get_stack_optional<PackageManager1UpdateParameters>(j, "PackageManager1UpdateParameters");
x.packageManager1UpdateResult = get_stack_optional<PackageManager1ResultWithTaskID>(j, "PackageManager1UpdateResult");
x.repoConfig = get_stack_optional<RepoConfig>(j, "RepoConfig");
x.repositoryCache = get_stack_optional<RepositoryCache>(j, "RepositoryCache");
x.uabMetaInfo = get_stack_optional<UabMetaInfo>(j, "UABMetaInfo");
}

inline void to_json(json & j, const LinglongAPIV1 & x) {
j = json::object();
if (x.applicationConfiguration) {
j["ApplicationConfiguration"] = x.applicationConfiguration;
}
if (x.applicationConfigurationPermissions) {
j["ApplicationConfigurationPermissions"] = x.applicationConfigurationPermissions;
}
if (x.builderConfig) {
j["BuilderConfig"] = x.builderConfig;
}
if (x.builderProject) {
j["BuilderProject"] = x.builderProject;
}
if (x.cliContainer) {
j["CLIContainer"] = x.cliContainer;
}
if (x.commonResult) {
j["CommonResult"] = x.commonResult;
}
if (x.interactionReply) {
j["InteractionReply"] = x.interactionReply;
}
if (x.interactionRequest) {
j["InteractionRequest"] = x.interactionRequest;
}
if (x.layerInfo) {
j["LayerInfo"] = x.layerInfo;
}
if (x.ociConfigurationPatch) {
j["OCIConfigurationPatch"] = x.ociConfigurationPatch;
}
if (x.packageInfo) {
j["PackageInfo"] = x.packageInfo;
}
if (x.packageInfoV2) {
j["PackageInfoV2"] = x.packageInfoV2;
}
if (x.packageManager1GetRepoInfoResult) {
j["PackageManager1GetRepoInfoResult"] = x.packageManager1GetRepoInfoResult;
}
if (x.packageManager1InstallLayerFDResult) {
j["PackageManager1InstallLayerFDResult"] = x.packageManager1InstallLayerFDResult;
}
if (x.packageManager1InstallParameters) {
j["PackageManager1InstallParameters"] = x.packageManager1InstallParameters;
}
if (x.packageManager1InstallResult) {
j["PackageManager1InstallResult"] = x.packageManager1InstallResult;
}
if (x.packageManager1MigrateResult) {
j["PackageManager1MigrateResult"] = x.packageManager1MigrateResult;
}
if (x.packageManager1ModifyRepoParameters) {
j["PackageManager1ModifyRepoParameters"] = x.packageManager1ModifyRepoParameters;
}
if (x.packageManager1ModifyRepoResult) {
j["PackageManager1ModifyRepoResult"] = x.packageManager1ModifyRepoResult;
}
if (x.packageManager1Package) {
j["PackageManager1Package"] = x.packageManager1Package;
}
if (x.packageManager1SearchParameters) {
j["PackageManager1SearchParameters"] = x.packageManager1SearchParameters;
}
if (x.packageManager1SearchResult) {
j["PackageManager1SearchResult"] = x.packageManager1SearchResult;
}
if (x.packageManager1UninstallParameters) {
j["PackageManager1UninstallParameters"] = x.packageManager1UninstallParameters;
}
if (x.packageManager1UninstallResult) {
j["PackageManager1UninstallResult"] = x.packageManager1UninstallResult;
}
if (x.packageManager1UpdateParameters) {
j["PackageManager1UpdateParameters"] = x.packageManager1UpdateParameters;
}
if (x.packageManager1UpdateResult) {
j["PackageManager1UpdateResult"] = x.packageManager1UpdateResult;
}
if (x.repoConfig) {
j["RepoConfig"] = x.repoConfig;
}
if (x.repositoryCache) {
j["RepositoryCache"] = x.repositoryCache;
}
if (x.uabMetaInfo) {
j["UABMetaInfo"] = x.uabMetaInfo;
}
}

inline void from_json(const json & j, Version & x) {
if (j == "1") x = Version::The1;
else { throw std::runtime_error("Input JSON does not conform to schema!"); }
}

inline void to_json(json & j, const Version & x) {
switch (x) {
case Version::The1: j = "1"; break;
default: throw std::runtime_error("Unexpected value in enumeration \"[object Object]\": " + std::to_string(static_cast<int>(x)));
}
}
}
}
}
}

// clang-format on
